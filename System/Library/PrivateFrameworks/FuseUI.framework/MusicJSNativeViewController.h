/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKDOMFeature.h>
#import <libobjc.A.dylib/MusicJSNativeViewController.h>
@class IKJSNavigationDocument;


@protocol MusicJSNativeViewController <JSExport>
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@required
-(IKJSNavigationDocument *)navigationDocument;

@end


@protocol MusicClientContextConsuming;
@class NSString, IKAppContext, IKJSNavigationDocument, IKDOMElement, IKJSObject, UIViewController, SKUIViewElement;

@interface MusicJSNativeViewController : IKJSEventListenerObject <IKDOMFeature, MusicJSNativeViewController> {

	BOOL _configured;
	IKDOMElement* _ownerDOMElement;
	IKJSObject* _ownerForScriptObjectGraph;
	UIViewController*<MusicClientContextConsuming> _ownerViewController;
	SKUIViewElement* _ownerViewElement;
	NSString* _featureName;
	NSString* _nativeViewIdentifier;
	long long _presentationSource;

}

@property (nonatomic,readonly) NSString * nativeViewIdentifier;                                                              //@synthesize nativeViewIdentifier=_nativeViewIdentifier - In the implementation block
@property (assign,nonatomic) long long presentationSource;                                                                   //@synthesize presentationSource=_presentationSource - In the implementation block
@property (getter=_isConfigured,nonatomic,readonly) BOOL configured; 
@property (getter=_ownerForScriptObjectGraph,nonatomic,__weak,readonly) IKJSObject * ownerForScriptObjectGraph; 
@property (getter=_ownerViewElement,nonatomic,__weak,readonly) SKUIViewElement * ownerViewElement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                                                  //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSString *)featureName;
-(id)initWithAppContext:(id)arg1 ;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)migrateToViewElement:(id)arg1 ;
-(IKJSNavigationDocument *)navigationDocument;
-(void)setPresentationSource:(long long)arg1 ;
-(NSString *)nativeViewIdentifier;
-(void)navigationDocumentDidChange;
-(id)jsNavigationDocumentForJSContext:(id)arg1 ;
-(long long)presentationSource;
-(BOOL)_isConfigured;
-(id)_ownerForScriptObjectGraph;
-(id)_ownerViewElement;
-(void)_configureForOwnerViewController:(id)arg1 ownerDOMElement:(id)arg2 ownerForScriptObjectGraph:(id)arg3 ;
@end
