/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSValueTransformer : NSObject
+(id)_transformerRegistry;
+(id)valueTransformerNames;
+(id)valueTransformerForName:(id)arg1 ;
+(void)setValueTransformer:(id)arg1 forName:(id)arg2 ;
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
@end

