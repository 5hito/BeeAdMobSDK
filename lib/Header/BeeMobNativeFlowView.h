//
//  BeeMobNativeFlowView.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/6/25.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BeeMobNativeFlowViewDelegate <NSObject>

- (void)beeMobNativeAdSuccessToLoad;
- (void)beeMobNativeAdFailToLoad:(NSError *)error;
- (void)beeMobNativeAdImpression;
- (void)beeMobNativeAdClick;

@end

@interface BeeMobNativeFlowView : UIView

@property (nonatomic, weak) id<BeeMobNativeFlowViewDelegate>delegate;
@property (nonatomic, assign) CGSize viewSize;
@property (nonatomic, weak) UIViewController *controller;

@property (nonatomic, strong) UIColor* titleColor;//默认白色
@property (nonatomic, strong) UIColor* describeColor;//默认白色

- (instancetype)initWithFrame:(CGRect)frame withGGPid:(NSString*)pid;
- (void)loadAdRequest;
+ (CGFloat)adViewHeight;

@end
