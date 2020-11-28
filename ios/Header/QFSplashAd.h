//
//  QFSplashAd.h
//  Pods
//
//  Created by LinBee on 2020/9/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QFSplashAd;

@protocol QFSplashAdDelegate <NSObject>

@optional
/**
 *  开屏广告成功展示
 */
- (void)splashAdSuccessPresentScreen:(QFSplashAd *)splashAd;

/**
 *  开屏广告素材加载成功
 */
- (void)splashAdDidLoad:(QFSplashAd *)splashAd;

/**
 *  开屏广告展示失败
 */
- (void)splashAdFailToPresent:(QFSplashAd *)splashAd withError:(NSError *)error;

/**
 *  开屏广告点击回调
 */
- (void)splashAdClicked:(QFSplashAd *)splashAd;

/**
 *  开屏广告关闭回调
 */
- (void)splashAdClosed:(QFSplashAd *)splashAd;



@end

@interface QFSplashAd : NSObject

/**
 *  开屏广告的背景色
 *  可以设置开屏图片来作为开屏加载时的默认图片
 */
@property (nonatomic, strong) UIColor *backgroundColor;
/**
 *  委托对象
 */
@property (nonatomic, weak) id<QFSplashAdDelegate> delegate;

- (instancetype)initWithPlacementID:(NSString*)placementID;
- (void)loadAdAndShowInWindow:(UIWindow *)window withBottomView:(UIView *)bottomView;

@end
