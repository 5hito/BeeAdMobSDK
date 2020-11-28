//
//  QFInterstitialAd.h
//  Pods
//
//  Created by LinBee on 2020/9/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QFInterstitialAd;
@protocol QFInterstitialAdDelegate <NSObject>

@optional

/**
 *  广告预加载成功回调
 *  详解:当接收服务器返回的广告数据成功且预加载后调用该函数
 */
- (void)interstitialSuccessToLoadAd:(QFInterstitialAd *)interstitial;

/**
 *  广告预加载失败回调
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)interstitialFailToLoadAd:(QFInterstitialAd *)interstitial error:(NSError *)error;

/**
 *  插屏广告视图展示成功回调
 *  详解: 插屏广告展示成功回调该函数
 */
- (void)interstitialImpression:(QFInterstitialAd *)interstitial;

/**
 *  插屏广告点击回调
 */
- (void)interstitialClicked:(QFInterstitialAd *)interstitial;

/**
 *  广告页将要关闭
 */
- (void)interstitialClosed:(QFInterstitialAd *)interstitial;

@end

@interface QFInterstitialAd : NSObject

/**
 *  插屏广告预加载是否完成
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/**
 *  委托对象
 */
@property (nonatomic, weak) id<QFInterstitialAdDelegate> delegate;

/**
*  构造方法
*       placementId - 广告位 ID
*/
- (instancetype)initWithPlacementID:(NSString*)placementID;

/**
 *  广告发起请求方法
 *  详解：[必选]发起拉取广告请求
 */
- (void)loadAd;

/**
 *  广告展示方法
 *  详解：[必选]发起展示广告请求, 必须传入用于显示插播广告的UIViewController
 */
- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end


