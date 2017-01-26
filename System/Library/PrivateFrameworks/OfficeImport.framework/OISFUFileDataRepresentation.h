/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@protocol SFUInputStream;
@class NSString, OISFUCryptoKey;

@interface OISFUFileDataRepresentation : OISFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned mFileType;
	BOOL mHasFileAttributes;
	long long mPlaintextDataLength;
	OISFUCryptoKey* mCryptoKey;
	id<SFUInputStream> mInputStream;
	BOOL mDeleteFileWhenDone;

}
-(void)readFileAttributes;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(unsigned)fileType;
-(void)setFileType:(unsigned)arg1 ;
-(long long)dataLength;
-(long long)encodedLength;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(BOOL)isCryptoKeyIdenticalToKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)deleteFileWhenDone;
-(id)inputStream;
-(BOOL)isReadable;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
-(BOOL)isEncrypted;
@end
