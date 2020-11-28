//
//  QFVideoRewardAd.h
//  Pods
//
//  Created by LinBee on 2020/9/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "QFMobAdHeader.h"

@class QFVideoRewardAd;
@class QFMobRewardVideoModel;

@protocol QFVideoRewardAdDelegate <NSObject>

@optional
/**
 广告数据加载成功回调
 */
- (void)rewardVideoAdDidLoad:(QFVideoRewardAd *)rewardedVideoAd;

/**
 视频广告各种错误信息回调
 @param error 具体错误信息
 */
- (void)rewardVideoAd:(QFVideoRewardAd *)rewardedVideoAd didFailWithError:(NSError *)error;

/**
 视频广告视频播放开始
 */
- (void)rewardVideoAdDidStartPlaying:(QFVideoRewardAd *)rewardedVideoAd;

/**
 视频广告视频播放完成
 */
- (void)rewardVideoAdDidPlayFinish:(QFVideoRewardAd *)rewardedVideoAd;

/**
 视频广告视频播放失败
 */
- (void)rewardVideoAdDidFailToPlay:(QFVideoRewardAd *)rewardedVideoAd error:(NSError *)error;

/**
 视频播放页关闭回调
 */
- (void)rewardVideoAdDidClose:(QFVideoRewardAd *)rewardedVideoAd;

/**
 视频广告信息点击回调
 */
- (void)rewardVideoAdDidClicked:(QFVideoRewardAd *)rewardedVideoAd;

/**
 视频广告播放达到激励条件回调
 */
- (void)rewardVideoAdDidRewardEffective:(QFVideoRewardAd *)rewardedVideoAd rewardType:(QFNetworkFirmType)type;

@end

@interface QFVideoRewardAd : NSObject

@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;
@property (nonatomic, weak) id <QFVideoRewardAdDelegate> delegate;

/**
 构造方法
 
 @param placementId - 广告位 ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId rewardModel:(QFMobRewardVideoModel*)model;

/**
 加载广告方法
 */
- (void)loadAd;

/**
 展示广告方法
 @param rootViewController 用于 present 激励视频 VC
 @return 是否展示成功
 */
- (BOOL)showAdFromRootViewController:(UIViewController *)rootViewController;

@end


@interface QFMobRewardVideoModel : NSObject

@property (nonatomic, strong, readonly) NSString* userId;
@property (nonatomic, strong, readonly) NSString* extra;

- (instancetype)initWithUserId:(NSString*)userId extra:(NSString*)extra;

@end
