//
//  BeeSplashAd.h
//  BeeMobSDK
//
//  Created by 林述灿 on 2017/6/28.
//  Copyright © 2017年 reactTest. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BeeSplashAd;
@protocol BeeSplashAdDelegate <NSObject>

@optional

- (void)beeMobSplashDidReceiveAd:(BeeSplashAd * _Nullable)splashAd;
- (void)beeMobSplashAdImpression:(BeeSplashAd * _Nullable)splashAd;
- (void)beeMobSplashAdLoadFail:(BeeSplashAd * _Nullable)splashAd;
- (void)beeMobSplashAdClicked:(BeeSplashAd * _Nullable)splashAd;
- (void)beeMobSplashAdSkip:(BeeSplashAd * _Nullable)splashAd;
- (void)beeMobSplashAdWillClose:(BeeSplashAd * _Nullable)splashAd;
- (void)beeMobSplashAdClose:(BeeSplashAd * _Nullable)splashAd;

@end

@interface BeeSplashAd : NSObject
/**
 *  可外部设置谷歌广告id
 */
- (instancetype _Nullable )initWithGGSplashId:(NSString* _Nullable)pid;

/**
 *  委托对象
 */
@property (nonatomic, weak) id<BeeSplashAdDelegate> _Nullable delegate;

/**
 *  开屏广告的背景色
 *  可以设置开屏图片来作为开屏加载时的默认图片
 */
@property (nonatomic, copy) UIColor * _Nullable backgroundColor;

/**
 *  广告发起请求并展示在Window中
 *  详解：[可选]发起拉取广告请求,并将获取的广告以全屏形式展示在传入的Window参数中
 *  @param window 展示全屏开屏的容器
 */
-(void)loadAdAndShowInWindow:( UIWindow * _Nonnull )window;

/**
 *  广告发起请求并展示在Window中, 同时在屏幕底部设置应用自身的Logo页面或是自定义View
 *  详解：[可选]发起拉取广告请求,并将获取的广告以半屏形式展示在传入的Window的上半部，剩余部分展示传入的bottomView
 *       请注意bottomView需设置好宽高，所占的空间不能过大，并保证广告界面的高度大于360
 *  @param window 展示开屏的容器
 *         bottomView 自定义底部View，可以在此View中设置应用Logo
 */
-(void)loadAdAndShowInWindow:(UIWindow * _Nonnull)window withBottomView:(UIView * _Nullable)bottomView;



@end
