//
//  QFNativeFlowAdView.h
//  AFNetworking
//
//  Created by LinBee on 2020/9/27.
//

#import <UIKit/UIKit.h>

@class QFNativeFlowAdView;

@protocol QFNativeFlowAdViewDelegate <NSObject>

@optional

/**
广告数据回调成功
*/
- (void)nativeFlowAdViewDidLoad:(QFNativeFlowAdView *)nativeAdView;

/**
广告数据回调失败
*/
- (void)nativeFlowAdViewFailedToLoad:(QFNativeFlowAdView *)nativeAdView error:(NSError *)error;

/**
 广告曝光回调
 */
- (void)nativeFlowViewDidShow:(QFNativeFlowAdView *)nativeAdView;

/**
 广告点击回调
 */
- (void)nativeFlowAdViewDidClick:(QFNativeFlowAdView *)nativeAdView;

/**
 *  用户关闭时调用
 */
- (void)nativeFlowAdViewDidClose:(QFNativeFlowAdView *)nativeAdView;

@end

@interface QFNativeFlowAdView : UIView

/**
 广告 View 时间回调对象
 */
@property (nonatomic, weak) id<QFNativeFlowAdViewDelegate> delegate;

/**
 广告图片宽高比，默认1.78， 1280/720 = 1.777
 */
@property (nonatomic, assign) CGFloat scaleFactor;

/**
获取广告 View 高度
*/
@property (nonatomic, assign, readonly) CGSize nativeSize;

/**
自渲染广告需要设置字颜色，默认黑色
*/
@property (nonatomic, strong) UIColor* titleColor;
@property (nonatomic, strong) UIColor* describeColor;

/**
 构造方法

 @param size 广告大小
 @param placementId 广告位ID
 @param viewController  viewControllerForPresentingModalView
 *  详解：开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 @return QFNativeFlowAdView 实例
 */
- (instancetype)initWithSize:(CGSize)size
                 placementId:(NSString *)placementId
              viewController:(UIViewController *)viewController;

/**
 加载广告
 */
- (void)loadAd;

@end

