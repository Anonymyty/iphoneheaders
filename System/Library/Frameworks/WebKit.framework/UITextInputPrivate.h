/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITextInteractionAssistant;


@protocol UITextInputPrivate <UITextInput,UITextInputTokenizer,UITextInputTraits_Private>
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@optional
-(BOOL)_shouldRepeatInsertText:(id)arg1;
-(double)_delayUntilRepeatInsertText:(id)arg1;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
-(id)metadataDictionariesForDictationResults;
-(CGRect*)visibleRect;
-(id)textColorForCaretSelection;
-(long long)selectionGranularity;
-(void)setSelectionGranularity:(long long)arg1;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(double)arg1;
-(BOOL)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1;
-(id)selectionInteractionAssistant;
-(void)streamingDictationDidBegin;
-(void)streamingDictationDidEnd;
-(void)acceptedAutoFillWord:(id)arg1;
-(BOOL)isAutoFillMode;
-(id)fontForCaretSelection;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
-(void)_willShowCorrections;
-(void)_didHideCorrections;

@required
-(UITextInteractionAssistant *)interactionAssistant;
-(id)textInputTraits;
-(void)selectAll;
-(NSRange*)selectionRange;
-(BOOL)hasSelection;
-(BOOL)hasContent;

@end

