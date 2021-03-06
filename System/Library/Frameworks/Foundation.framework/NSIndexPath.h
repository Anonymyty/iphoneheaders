/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long* _indexes;
	unsigned long long _length;
	void* _reserved;

}

@property (nonatomic,readonly) long long tk_section; 
@property (nonatomic,readonly) long long tk_row; 
@property (getter=pu_isValid,nonatomic,readonly) BOOL pu_valid; 
@property (nonatomic,readonly) long long ab_group; 
@property (nonatomic,readonly) long long ab_item; 
@property (nonatomic,readonly) long long item; 
@property (nonatomic,readonly) long long section; 
@property (nonatomic,readonly) long long row; 
@property (readonly) unsigned long long length; 
+(id)tk_indexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
+(id)pu_indexPathsForItems:(id)arg1 inSection:(long long)arg2 ;
+(id)pu_indexPathForItem:(long long)arg1 inSubSection:(long long)arg2 section:(long long)arg3 ;
+(id)pu_rootIndexPath;
+(id)indexPathForItem:(long long)arg1 inGroup:(long long)arg2 ;
+(id)indexPathForItem:(long long)arg1 inSection:(long long)arg2 ;
+(id)indexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
+(id)indexPath;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)indexPathWithIndex:(unsigned long long)arg1 ;
+(id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(long long)tk_section;
-(long long)tk_row;
-(id)__ck_indexPathShiftedForInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2 ;
-(BOOL)pu_isValid;
-(id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1 ;
-(id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1 ;
-(id)pu_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)pu_isParentOfIndexPath:(id)arg1 ;
-(id)pu_indexPathAfterDeletingItemAtIndexPath:(id)arg1 ;
-(id)pu_indexPathAfterInsertingItemAtIndexPath:(id)arg1 ;
-(id)pu_indexPathByAppendingIndexPath:(id)arg1 ;
-(id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1 ;
-(id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1 ;
-(id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)pu_indexPathAfterMovingItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)pu_indexPathAfterReloadingItemAtIndexPath:(id)arg1 ;
-(id)pu_shortDescription;
-(id)dd_stringValue;
-(long long)ab_group;
-(long long)ab_item;
-(long long)item;
-(long long)row;
-(long long)section;
-(void)getIndexes:(unsigned long long*)arg1 range:(NSRange)arg2 ;
-(void)getIndexes:(unsigned long long*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)indexAtPosition:(unsigned long long)arg1 ;
-(id)indexPathByAddingIndex:(unsigned long long)arg1 ;
-(id)indexPathByRemovingLastIndex;
-(id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
@end

