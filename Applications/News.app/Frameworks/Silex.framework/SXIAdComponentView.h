/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/ADBannerViewDelegate.h>
#import <Silex/SXAdDisplayInstructions.h>

@class ADBannerView, SXIAdDebugView, NSError, NSString;

@interface SXIAdComponentView : SXComponentView <ADBannerViewDelegate, SXAdDisplayInstructions> {

	BOOL _hasInvalidatedLayout;
	BOOL _isReceivingScrollOffsetCallbacks;
	int _opportunityError;
	ADBannerView* _bannerView;
	/*^block*/id _cancelHandler;
	SXIAdDebugView* _debugView;
	NSError* _error;
	NSString* _generatedOpportunityIdentifier;
	CGSize _viewportSizeOnAdRequest;

}

@property (nonatomic,retain) ADBannerView * bannerView;                              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatedLayout;                              //@synthesize hasInvalidatedLayout=_hasInvalidatedLayout - In the implementation block
@property (assign,nonatomic) CGSize viewportSizeOnAdRequest;                         //@synthesize viewportSizeOnAdRequest=_viewportSizeOnAdRequest - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                         //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (assign,nonatomic) BOOL isReceivingScrollOffsetCallbacks;                  //@synthesize isReceivingScrollOffsetCallbacks=_isReceivingScrollOffsetCallbacks - In the implementation block
@property (nonatomic,retain) SXIAdDebugView * debugView;                             //@synthesize debugView=_debugView - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int opportunityError;                                   //@synthesize opportunityError=_opportunityError - In the implementation block
@property (nonatomic,retain) NSString * generatedOpportunityIdentifier;              //@synthesize generatedOpportunityIdentifier=_generatedOpportunityIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentingScrollViewDidScroll:(CGPoint)arg1 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 context:(id)arg3 ;
-(void)presentComponent;
-(BOOL)isReceivingScrollOffsetCallbacks;
-(void)setIsReceivingScrollOffsetCallbacks:(BOOL)arg1 ;
-(void)registerForScrollViewContentOffsetCallback;
-(void)unregisterForScrollViewContentOffsetCallback;
-(void)stopDisplayingAdWithError:(unsigned long long)arg1 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(void)adSheetDisconnectedNotification:(id)arg1 ;
-(void)setViewportSizeOnAdRequest:(CGSize)arg1 ;
-(void)cancelAdRequest;
-(BOOL)shouldRegisterScrollViewContentOffsetCallbacks;
-(void)removeBannerView;
-(void)invalidateLayoutIfNeeded;
-(BOOL)shouldRequestBannerView;
-(void)requestBannerView;
-(BOOL)hasInvalidatedLayout;
-(void)displayBannerView;
-(void)layoutBannerView;
-(BOOL)hasRequestedBannerViewCurrentViewport;
-(CGSize)viewportSizeOnAdRequest;
-(void)setOpportunityError:(int)arg1 ;
-(void)setGeneratedOpportunityIdentifier:(NSString *)arg1 ;
-(BOOL)shouldSendOpportunityEvent;
-(void)sendOpportunityEvent;
-(void)setHasInvalidatedLayout:(BOOL)arg1 ;
-(int)opportunityError;
-(NSString *)generatedOpportunityIdentifier;
-(void)setCancelHandler:(id)arg1 ;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(SXIAdDebugView *)debugView;
-(void)setDebugView:(SXIAdDebugView *)arg1 ;
-(id)cancelHandler;
-(void)setBannerView:(ADBannerView *)arg1 ;
-(ADBannerView *)bannerView;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
@end

