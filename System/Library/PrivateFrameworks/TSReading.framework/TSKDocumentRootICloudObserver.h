/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {

	long long _identifier;
	NSOperationQueue* _operationQueue;
	/*^block*/id _block;
	long long _identifer;

}

@property (nonatomic,readonly) long long identifer;              //@synthesize identifer=_identifer - In the implementation block
-(void)invokeWithDocumentRoot:(id)arg1 ;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(long long)identifer;
@end

