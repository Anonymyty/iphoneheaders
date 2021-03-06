/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PSSpecifierAction : NSObject <NSCopying> {

	/*^block*/id _getter;
	/*^block*/id _setter;

}

@property (nonatomic,copy) id getter;              //@synthesize getter=_getter - In the implementation block
@property (nonatomic,copy) id setter;              //@synthesize setter=_setter - In the implementation block
+(id)actionWithBoolDetailClass:(Class)arg1 ;
+(id)actionWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
+(id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGetter:(id)arg1 ;
-(id)getter;
-(id)setter;
-(void)setSetter:(id)arg1 ;
@end

