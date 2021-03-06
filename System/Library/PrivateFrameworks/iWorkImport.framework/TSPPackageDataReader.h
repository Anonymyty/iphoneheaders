/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileCoordinatorDelegate.h>

@class NSURL, TSPPackage, TSPDocumentProperties, NSString;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate> {

	NSURL* _URL;
	TSPPackage* _package;

}

@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) NSString * passwordHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(CGImageSourceRef)newCGImageSourceAtRelativePath:(id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(CGDataProviderRef)newCGDataProviderAtRelativePath:(id)arg1 ;
-(CGImageRef)newCGImageAtRelativePath:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(BOOL)isPasswordProtected;
-(NSString *)passwordHint;
-(TSPDocumentProperties *)documentProperties;
@end

