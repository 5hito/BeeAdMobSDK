//
//  QFFloatingWindowAdView.h
//  Pods
//
//  Created by LinBee on 2020/9/29.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QFFloatingWindowAdView;
@protocol QFFloatingWindowAdViewDelegate <NSObject>

@optional
- (void)floatingWindowAdViewDidReceived:(QFFloatingWindowAdView*)adView;
- (void)floatingWindowAdViewFailToLoad:(QFFloatingWindowAdView*)adView error:(NSError*)error;
- (void)floatingWindowAdViewDidShow:(QFFloatingWindowAdView *)bannerView;
- (void)floatingWindowAdViewDidClicked:(QFFloatingWindowAdView*)adView;
- (void)floatingWindowAdViewDidClosed:(QFFloatingWindowAdView*)adView;

/**
 *  广告点击以后弹出全屏广告页
 */
- (void)floatingWindowAdViewDidPresentFullScreenModal:(QFFloatingWindowAdView *)adView;

/**
 *  点击以后全屏广告页已经关闭
 */
- (void)floatingWindowAdViewDidDismissFullScreenModal:(QFFloatingWindowAdView *)adView;

@end

@interface QFFloatingWindowAdView : UIView

@property (nonatomic, weak) id<QFFloatingWindowAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController* rootController;
@property (nonatomic, assign) CGPoint viewPoint;
@property (nonatomic, assign) BOOL bShowClose;

- (void)loadAdAndShow;

@end


