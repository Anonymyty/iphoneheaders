/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/__UIKitWebAccessibilityObjectWrapper_super.h>

@interface UIKitWebAccessibilityObjectWrapper : __UIKitWebAccessibilityObjectWrapper_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)initialize;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)postFocusChangeNotification;
-(void)postSelectedTextChangeNotification;
-(void)postLayoutChangeNotification;
-(void)postLiveRegionChangeNotification;
-(void)postLiveRegionCreatedNotification;
-(void)postChildrenChangedNotification;
-(void)postLoadCompleteNotification;
-(void)postInvalidStatusChangedNotification;
-(void)postValueChangedNotification;
-(void)postExpandedChangedNotification;
-(id)ariaLandmarkRoleDescription;
-(BOOL)_prepareAccessibilityCall;
-(BOOL)accessibilityCanFuzzyHitTest;
-(id)accessibilityPostProcessHitTest:(CGPoint)arg1 ;
-(unsigned long long)_axLinkTrait;
-(unsigned long long)_axVisitedTrait;
-(unsigned long long)_axHeaderTrait;
-(unsigned long long)_axContainedByListTrait;
-(unsigned long long)_axContainedByTableTrait;
-(unsigned long long)_axContainedByLandmarkTrait;
-(unsigned long long)_axWebContentTrait;
-(unsigned long long)_axSecureTextFieldTrait;
-(unsigned long long)_axTextEntryTrait;
-(unsigned long long)_axHasTextCursorTrait;
-(unsigned long long)_axTextOperationsAvailableTrait;
-(unsigned long long)_axImageTrait;
-(unsigned long long)_axTabButtonTrait;
-(unsigned long long)_axButtonTrait;
-(unsigned long long)_axToggleTrait;
-(unsigned long long)_axPopupButtonTrait;
-(unsigned long long)_axRadioButtonTrait;
-(unsigned long long)_axStaticTextTrait;
-(unsigned long long)_axAdjustableTrait;
-(unsigned long long)_axMenuItemTrait;
-(unsigned long long)_axSelectedTrait;
-(unsigned long long)_axNotEnabledTrait;
-(void)postScrollStatusChangeNotification;
-(id)_accessibilityWebDocumentView;
-(id)accessibilityURL;
-(CGPoint)_accessibilityConvertPointToViewSpace:(CGPoint)arg1 ;
-(id)accessibilitySpeechHint;
-(id)accessibilityMathRootIndexObject;
-(id)accessibilityMathRadicandObject;
-(id)accessibilityMathNumeratorObject;
-(id)accessibilityMathDenominatorObject;
-(id)accessibilityMathBaseObject;
-(id)accessibilityMathSubscriptObject;
-(id)accessibilityMathSuperscriptObject;
-(id)accessibilityMathUnderObject;
-(id)accessibilityMathOverObject;
-(id)accessibilityMathPostscripts;
-(id)accessibilityMathPrescripts;
-(id)accessibilityMathFencedOpenString;
-(id)accessibilityMathFencedCloseString;
-(BOOL)accessibilityIsMathTopObject;
-(id)accessibilityMathType;
-(id)_accessibilityParentForSubview:(id)arg1 ;
-(CGRect)bounds;
-(id)description;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityLanguage;
-(id)accessibilityPath;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityActivate;
-(CGRect)_accessibilityVisibleFrame;
-(id)_accessibilityUserTestingElementBaseType;
-(CGRect)accessibilityFrameForScrolling;
-(BOOL)_accessibilityShouldScrollRemoteParent;
-(unsigned)_accessibilityContextId;
-(BOOL)_accessibilityVisiblePointHonorsScreenBounds;
-(NSRange)_accessibilityRangeForTextMarker:(id)arg1 ;
-(BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1 ;
-(BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1 ;
-(id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1 ;
-(id)_accessibilityLineStartMarker:(id)arg1 ;
-(void)_accessibilityMoveSelectionToMarker:(id)arg1 ;
-(id)_accessibilityMarkerForPoint:(CGPoint)arg1 ;
-(id)_accessibilityLineEndMarker:(id)arg1 ;
-(id)_accessibilityNextMarker:(id)arg1 ;
-(id)_accessibilityPreviousMarker:(id)arg1 ;
-(id)accessibilityStringForTextMarkers:(id)arg1 ;
-(id)_accessibilityObjectForTextMarker:(id)arg1 ;
-(CGRect)accessibilityBoundsForTextMarkers:(id)arg1 ;
-(id)accessibilityArrayOfTextForTextMarkers:(id)arg1 ;
-(BOOL)_accessibilitySpeakThisCanBeHighlighted;
-(int)_accessibilityExpandedStatus;
-(BOOL)_accessibilityIsScrollable;
-(id)_accessibilityDOMAttributes;
-(BOOL)_accessibilitySupportsPressedState;
-(BOOL)_accessibilityIsPressed;
-(id)accessibilityMathEquation;
-(BOOL)_accessibilityShouldSpeakMathEquationTrait;
-(id)_accessibilityTextMarkerRange;
-(id)_accessibilityTextMarkerRangeForSelection;
-(NSRange)_accessibilitySelectedNSRangeForObject;
-(id)_accessibilityApplication;
-(id)_accessibilityWebAreaURL;
-(BOOL)_accessibilityIsFirstSibling;
-(BOOL)_accessibilityIsLastSibling;
-(void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2 ;
-(BOOL)_accessibilityShouldReleaseAfterUnregistration;
-(id)_accessibilityTextMarkerForPosition:(long long)arg1 ;
-(BOOL)_accessibilityHandwritingAttributeAcceptsRawInput;
-(BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
-(BOOL)_accessibilityAlwaysSpeakTableHeaders;
-(void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2 ;
-(void)_accessibilityDecreaseSelection:(id)arg1 ;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(BOOL)_accessibilityHasTextOperations;
-(NSRange)accessibilityRowRange;
-(BOOL)_accessibilityIsFrameOutOfBounds;
-(id)_accessibilityParentView;
-(CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(CGRect)arg1 ;
-(void)_accessibilityUnregister;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityScrollStatus;
-(BOOL)_accessibilityScrollToVisible;
-(id)accessibilityPlaceholderValue;
-(NSRange)_accessibilitySelectedTextRange;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilitySpeakThisString;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(id)_accessibilityScrollAncestor;
-(id)_accessibilityRoleDescription;
-(BOOL)_axIsWebKit2;
-(id)_accessibilityWebPageObject;
-(id)_axWebKitTrueLinkParent;
-(BOOL)_axWebKitSupportsARIAPressed;
-(BOOL)_axWebKitIsAriaPressed;
-(BOOL)_axWebKitSupportsARIAExpanded;
-(BOOL)_axWebKitIsAriaExpanded;
-(BOOL)_axWebKitHasPopup;
-(void)_accessibilityDetermineIfShouldUseParentLinkLabel;
-(id)_accessibilityMathEquationRootObject;
-(BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3 sawAXElement:(BOOL*)arg4 ;
-(BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3 ;
-(BOOL)_accessibilityIsDataEmpty:(id)arg1 ;
-(id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1 ;
-(id)_accessibilityConvertTextMarkersToDataArray:(id)arg1 ;
-(id)_accessibilityMarkerPosition:(BOOL)arg1 withMarker:(id)arg2 ;
-(id)_accessibilityLinePosition:(BOOL)arg1 withMarker:(id)arg2 ;
-(id)_accessibilityWebPageParent;
-(BOOL)_isIBooks;
-(NSRange)_accessibilityCheckRowRangeForTrait:(unsigned long long)arg1 ;
-(long long)_accessibilityChildElementCount;
-(BOOL)_accessibilityUsesParentLinkLabel;
-(id)_accessibilityProcessRootEquation;
-(void)_accessibilityModifySelection:(id)arg1 increase:(BOOL)arg2 ;
-(id)_accessibilityValueForHandwriting;
-(NSRange)_accessibilitySelectedTextRangeForHandwritingWithValue:(id)arg1 ;
-(id)_accessibilityMakeScrollStatus:(CGRect)arg1 scrollPosition:(CGPoint)arg2 contentSize:(CGSize)arg3 ;
-(void)_performPostScrollStatus:(id)arg1 ;
-(void)_performLiveRegionUpdate;
-(void)_repostWebSelectionChange;
-(void)_repostLoadCompleteNotification;
-(void)_repostWebNotificaton:(id)arg1 ;
-(BOOL)_axHasMultipleAccessibleChildren:(long long*)arg1 ;
-(void)_repostFocusChangeNotification;
-(id)_axWebAreaURL;
-(void)_axSetWebAreaURL:(id)arg1 ;
-(BOOL)_accessibilityRequiresContextIdConversion;
-(BOOL)_isCheckBox;
-(void)postScreenChangeNotification;
-(BOOL)isScreenReaderRunning;
-(id)screenReaderVersion;
@end

