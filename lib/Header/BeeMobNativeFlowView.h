//
//  BeeMobNativeFlowView.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/6/25.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BeeMobNativeFlowView;
@protocol BeeMobNativeFlowViewDelegate <NSObject>

- (void)beeMobNativeAdSuccessToLoad:(BeeMobNativeFlowView*)nativeView;
- (void)beeMobNativeAdFailToLoad:(BeeMobNativeFlowView*)nativeView error:(NSError *)error;
- (void)beeMobNativeAdImpression:(BeeMobNativeFlowView*)nativeView;;
- (void)beeMobNativeAdClick:(BeeMobNativeFlowView*)nativeView;;

@end

@interface BeeMobNativeFlowView : UIView

@property (nonatomic, weak) id<BeeMobNativeFlowViewDelegate>delegate;
@property (nonatomic, assign) CGSize viewSize;
@property (nonatomic, weak) UIViewController *controller;

@property (nonatomic, strong) UIColor* titleColor;//默认白色
@property (nonatomic, strong) UIColor* describeColor;//默认白色

- (instancetype)initWithFrame:(CGRect)frame withGGPid:(NSString*)pid;
- (void)loadAdRequest;
- (CGFloat)adViewDynamicHeight;

+ (CGFloat)adViewHeight;

@end
