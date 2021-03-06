/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryDescriptor, SKUIViewElement, SKUIIndexBarEntryViewElement;

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryDescriptor* _entryDescriptor;
	SKUIViewElement* _descriptiveViewElement;
	SKUIIndexBarEntryViewElement* _entryViewElement;

}

@property (nonatomic,readonly) SKUIIndexBarEntryViewElement * entryViewElement;              //@synthesize entryViewElement=_entryViewElement - In the implementation block
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(BOOL)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(BOOL)needsRootTargetViewElement;
-(void)reloadViewElementData;
-(id)initWithEntryViewElement:(id)arg1 ;
-(SKUIIndexBarEntryViewElement *)entryViewElement;
@end

