/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/ChatKitAssistantUI.siriUIBundle/ChatKitAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>

@class CKMessageSnippetContentView, SASmsSms;

@interface CKAssistantUISnippetController : SiriUISnippetViewController {

	CKMessageSnippetContentView* _snippetContentView;
	SASmsSms* _draftSMS;

}
-(void)updateUIFromSnippet;
-(id)_headerPunchOutURL;
-(void)_updatePunchOutUri;
-(void)dealloc;
-(void)loadView;
-(void)setCancelled:(BOOL)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setRecipients:(id)arg1 ;
@end

