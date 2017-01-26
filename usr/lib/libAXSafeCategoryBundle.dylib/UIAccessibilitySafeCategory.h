/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAXSafeCategoryBundle.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAXSafeCategoryBundle.dylib/libAXSafeCategoryBundle.dylib-Structs.h>
@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic,copy) NSString * accessibilityIdentifier; 
+(id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(BOOL)arg2 ;
+(id)_installLocalValidationMethodOnClassNamed:(id)arg1 ;
+(void)_addCategoryMethod:(objc_methodRef)arg1 toClass:(Class)arg2 isClass:(BOOL)arg3 ;
+(id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(BOOL)arg2 ;
+(Class)safeCategoryTargetClass;
+(void)safeCategoryAddDependenciesToCollection:(id)arg1 ;
+(void)_installSafeCategoryOnClassNamed:(id)arg1 ;
+(id)safeCategoryTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
+(Class)safeCategoryBaseClass;
@end
