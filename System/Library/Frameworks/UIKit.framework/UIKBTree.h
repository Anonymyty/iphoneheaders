/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface UIKBTree : NSObject <NSCopying> {

	int type;
	NSString* name;
	NSMutableDictionary* properties;
	NSMutableArray* subtrees;
	NSMutableDictionary* cache;
	NSString* layoutTag;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableDictionary * properties; 
@property (nonatomic,retain) NSMutableArray * subtrees; 
@property (nonatomic,retain) NSMutableDictionary * cache; 
@property (nonatomic,retain) NSString * layoutTag; 
+(id)treeOfType:(int)arg1 ;
+(id)key;
+(id)keyboard;
+(long long)extraIdiomForVisualStyling:(SCD_Struct_UI40)arg1 width:(double)arg2 ;
+(id)uniqueName;
+(id)stringForType:(int)arg1 ;
+(id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2 ;
+(BOOL)typeIsPersistent:(int)arg1 ;
+(BOOL)shouldSkipCacheString:(id)arg1 ;
+(id)mergeStringForKeyName:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(id)description;
-(int)state;
-(BOOL)isSplit;
-(void)setState:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDisplayString:(id)arg1 ;
-(void)setRepresentedString:(id)arg1 ;
-(void)setDisplayType:(int)arg1 ;
-(void)setInteractionType:(int)arg1 ;
-(id)representedString;
-(NSString *)name;
-(void)setOverrideDisplayString:(id)arg1 ;
-(void)setSelectedVariantIndex:(long long)arg1 ;
-(void)setVariantPopupBias:(id)arg1 ;
-(void)setSubtrees:(NSMutableArray *)arg1 ;
-(void)setVariantType:(int)arg1 ;
-(void)setShape:(id)arg1 ;
-(void)setParentKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forProperty:(id)arg2 ;
-(long long)selectedVariantIndex;
-(NSMutableArray *)subtrees;
-(id)displayString;
-(id)objectForProperty:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)visible;
-(id)initWithType:(int)arg1 ;
-(id)recursiveDescription;
-(void)setVisible:(BOOL)arg1 ;
-(long long)textAlignment;
-(int)visualStyle;
-(void)setVisualStyle:(int)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI40)arg1 ;
-(SCD_Struct_UI40)visualStyling;
-(BOOL)disabled;
-(int)interactionType;
-(int)variantType;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isAlphabeticPlane;
-(BOOL)diacriticForwardCompose;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(BOOL)usesAutoShift;
-(BOOL)shouldSkipCandidateSelection;
-(BOOL)isShiftKeyPlaneChooser;
-(id)keyplaneForKey:(id)arg1 ;
-(int)displayType;
-(id)geometry;
-(CGRect)paddedFrame;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(int)clipCorners;
-(id)shape;
-(long long)intForProperty:(id)arg1 ;
-(int)rendering;
-(int)displayTypeHint;
-(void)setClipCorners:(int)arg1 ;
-(void)setGeometry:(id)arg1 ;
-(id)cachedKeysByKeyName:(id)arg1 ;
-(id)layoutName;
-(id)stringForProperty:(id)arg1 ;
-(id)subtreeWithName:(id)arg1 ;
-(id)keysWithString:(id)arg1 ;
-(id)keys;
-(id)fullRepresentedString;
-(id)firstCachedKeyWithName:(id)arg1 ;
-(void)setRendering:(int)arg1 ;
-(void)setDisplayTypeHint:(int)arg1 ;
-(id)autolocalizedKeyCacheIterator;
-(id)localizationKey;
-(BOOL)isShiftKeyplane;
-(BOOL)looksLikeShiftAlternate;
-(id)shiftAlternateKeyplaneName;
-(id)keysByKeyName:(id)arg1 ;
-(BOOL)isRightToLeftSensitive;
-(void)zipGeometrySet;
-(void)setIsGenerated:(BOOL)arg1 ;
-(void)precacheLayoutName:(id)arg1 ;
-(BOOL)behavesAsShiftKey;
-(void)elaborateLayoutWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)keySet;
-(id)numberForProperty:(id)arg1 ;
-(void)setDisplayRowHint:(int)arg1 ;
-(void)setFlickDirection:(long long)arg1 ;
-(BOOL)notUseCandidateSelection;
-(int)displayRowHint;
-(void)setSecondaryDisplayStrings:(id)arg1 ;
-(void)setSecondaryRepresentedStrings:(id)arg1 ;
-(NSMutableDictionary *)cache;
-(id)secondaryRepresentedStrings;
-(id)secondaryDisplayStrings;
-(void)setHighlightedVariantsList:(id)arg1 ;
-(id)keysForMergeConditions;
-(id)mergeKeyNames:(id)arg1 ;
-(void)centerKeys:(id)arg1 inRect:(CGRect)arg2 scale:(double)arg3 ;
-(void)updateMoreAndInternationalKeysWithOptions:(int)arg1 ;
-(void)mergeReturnKey:(id)arg1 withReturnKey:(id)arg2 ;
-(long long)handBias;
-(BOOL)supportsType:(long long)arg1 ;
-(BOOL)ghost;
-(BOOL)isExemptFromInputManagerHitTesting;
-(BOOL)isExemptFromInputManagerLayout;
-(BOOL)usesKeyCharging;
-(BOOL)shouldSkipCandidateSelectionForVariants;
-(BOOL)forceMultitap;
-(BOOL)hasLayoutTag:(id)arg1 ;
-(id)overrideDisplayString;
-(id)componentName;
-(void)updateVariantTypeForActions:(unsigned)arg1 ;
-(BOOL)noLanguageIndicator;
-(id)keysOrderedByPositionWithoutZip;
-(BOOL)avoidsLanguageIndicator;
-(double)primaryKeylayoutWidthRatio;
-(double)primaryKeylayoutOffset;
-(id)parentKey;
-(id)alternateKeyplaneName;
-(BOOL)modifiesKeyplane;
-(int)dragThreshold;
-(long long)flickDirection;
-(BOOL)boolForProperty:(id)arg1 ;
-(BOOL)allowRetestAfterCommittingDownActions;
-(BOOL)dynamicDisplayTypeHint;
-(NSMutableDictionary *)properties;
-(BOOL)isLeafType;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(BOOL)isSameAsTree:(id)arg1 ;
-(BOOL)isGenerated;
-(BOOL)_needsScaling;
-(id)geometrySet:(BOOL)arg1 ;
-(id)attributeSet:(BOOL)arg1 ;
-(void)zipGeometries:(BOOL)arg1 attributes:(BOOL)arg2 ;
-(id)listShapes;
-(id)geometriesList;
-(long long)_keyCountOnNamedRow:(id)arg1 ;
-(id)activeShapesFromOutputShapes:(id)arg1 inputShapes:(id)arg2 ;
-(CGRect)_keyplaneFrame;
-(SCD_Struct_UI40)stylingFromVisualStyle;
-(id)unhashedName;
-(id)_cacheRootNameForKey:(id)arg1 ;
-(BOOL)shouldCacheKey;
-(void)cacheKey:(id)arg1 ;
-(void)_addKeylayoutKeys:(id)arg1 ;
-(id)geometries;
-(id)subtreeWithType:(int)arg1 ;
-(void)subsumeDisappearingKeyName:(id)arg1 intoKeyName:(id)arg2 factors:(id)arg3 ;
-(id)findLeftMoreKey;
-(void)updateDictationKeyOnNumberPads:(BOOL)arg1 ;
-(id)activeGeometriesList;
-(int)_variantType;
-(BOOL)_renderAsStringKey;
-(id)nameFromAttributes;
-(BOOL)isHashed;
-(id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5 ;
-(BOOL)isEqualToTree:(id)arg1 ;
-(BOOL)isDuplicateOfTree:(id)arg1 ;
-(id)subtreeWithName:(id)arg1 rows:(id)arg2 ;
-(id)subtreesWithProperty:(id)arg1 value:(id)arg2 ;
-(int)indexOfSubtree:(id)arg1 ;
-(void)zipAttributes;
-(BOOL)subtreesAreOrdered;
-(CGPoint)navigationPointOfKey;
-(id)keyForString:(id)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(id)keyAttributes;
-(void)clearTransientCaches;
-(id)keysOrderedByPosition;
-(id)keysOrderedByPositionRTL;
-(id)geometriesOrderedByPosition;
-(BOOL)usesAdaptiveKeys;
-(BOOL)isLetters;
-(BOOL)looksLike:(id)arg1 ;
-(void)setGeometriesList:(id)arg1 ;
-(void)setActiveGeometriesList:(id)arg1 ;
-(id)highlightedVariantsList;
-(long long)highlightedVariantIndex;
-(void)setGhost:(BOOL)arg1 ;
-(id)variantPopupBias;
-(int)splitMode;
-(void)setSplitMode:(int)arg1 ;
-(void)setForceMultitap:(BOOL)arg1 ;
-(BOOL)avoidAutoDeactivation;
-(BOOL)disablesEdgeSwipe;
-(BOOL)containsDividerVariant;
-(void)orderVariantKeys:(BOOL)arg1 ;
-(id)variantDisplayString;
-(id)cacheDisplayString;
-(id)cacheSecondaryDisplayString;
-(BOOL)renderKeyInKeyplane:(id)arg1 ;
@end
