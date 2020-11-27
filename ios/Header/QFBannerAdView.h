//
//  QFBannerAdView.h
//  Pods
//
//  Created by LinBee on 2020/9/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QFBannerAdView;

@protocol QFBannerAdViewDelegate <NSObject>
/**
 *  请求广告条数据成功后调用
 *  当接收服务器返回的广告数据成功后调用该函数
 */
- (void)bannerViewDidReceived:(QFBannerAdView *)bannerView;

/**
 *  请求广告条数据失败后调用
 *  当接收服务器返回的广告数据失败后调用该函数
 */
- (void)bannerViewFailedToLoad:(QFBannerAdView *)bannerView error:(NSError *)error;

/**
 *  广告展示
 */
- (void)bannerViewDidShow:(QFBannerAdView *)bannerView;

/**
 *  点击回调
 */
- (void)bannerViewClicked:(QFBannerAdView *)bannerView;

/**
 *  用户关闭时调用
 */
- (void)bannerViewWillClose:(QFBannerAdView *)bannerView;

@end


@interface QFBannerAdView : UIView

/**
 *  委托对象
 */
@property (nonatomic, weak) id<QFBannerAdViewDelegate> delegate;

/**
 *  构造方法
 *  详解：placementId - 广告位 ID
 *       viewController - 视图控制器
 */
- (instancetype)initWithPlacementId:(NSString *)placementId
                     viewController:(UIViewController *)viewController;

/**
 *  构造方法
 *  详解：frame - banner 展示的位置和大小
 *       placementId - 广告位 ID
 *       viewController - 视图控制器
 */
- (instancetype)initWithSize:(CGSize)size
                  placementId:(NSString *)placementId
               viewController:(UIViewController *)viewController;

/**
 *  拉取并展示广告
 */
- (void)loadAdAndShow;

/**
 *  移除banner
 */
- (void)willRemoveBannerView;

@end


