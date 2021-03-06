/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSURL, NSMutableURLRequest, NSMutableData, NSURLConnection, NSString, NSMultiPartInputStream, NSHTTPURLResponse;

@interface NSHttpRequest : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	BOOL _fFinished;
	BOOL _fExecuting;
	/*^block*/id _onResponse;
	/*^block*/id _onProgress;
	/*^block*/id _onUploadProgress;
	/*^block*/id _onHeaders;
	/*^block*/id _onError;
	NSURL* _fUrl;
	NSMutableURLRequest* _fActiveRequest;
	NSMutableData* _fReceivedData;
	NSURLConnection* _fUrlConnection;
	NSString* _fOriginalThreadName;
	NSMultiPartInputStream* _fBody;
	NSHTTPURLResponse* _fHttpResponse;

}

@property (nonatomic,copy) id onResponse;                                       //@synthesize onResponse=_onResponse - In the implementation block
@property (nonatomic,copy) id onProgress;                                       //@synthesize onProgress=_onProgress - In the implementation block
@property (nonatomic,copy) id onUploadProgress;                                 //@synthesize onUploadProgress=_onUploadProgress - In the implementation block
@property (nonatomic,copy) id onHeaders;                                        //@synthesize onHeaders=_onHeaders - In the implementation block
@property (nonatomic,copy) id onError;                                          //@synthesize onError=_onError - In the implementation block
@property (nonatomic,retain) NSURL * fUrl;                                      //@synthesize fUrl=_fUrl - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * fActiveRequest;              //@synthesize fActiveRequest=_fActiveRequest - In the implementation block
@property (nonatomic,retain) NSMutableData * fReceivedData;                     //@synthesize fReceivedData=_fReceivedData - In the implementation block
@property (nonatomic,retain) NSURLConnection * fUrlConnection;                  //@synthesize fUrlConnection=_fUrlConnection - In the implementation block
@property (assign) BOOL fFinished;                                              //@synthesize fFinished=_fFinished - In the implementation block
@property (assign) BOOL fExecuting;                                             //@synthesize fExecuting=_fExecuting - In the implementation block
@property (nonatomic,retain) NSString * fOriginalThreadName;                    //@synthesize fOriginalThreadName=_fOriginalThreadName - In the implementation block
@property (nonatomic,retain) NSMultiPartInputStream * fBody;                    //@synthesize fBody=_fBody - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * fHttpResponse;                 //@synthesize fHttpResponse=_fHttpResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getCookiesForUrl:(id)arg1 ;
+(id)UrlFromUtf8String:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)header:(id)arg1 valueForKey:(id)arg2 ;
+(id)header:(id)arg1 valuesForKey:(id)arg2 ;
+(id)requestWithUrl:(id)arg1 ;
+(id)getCookie:(id)arg1 forUrl:(id)arg2 ;
+(id)encodeFormValues:(id)arg1 ;
-(id)initWithUrl:(id)arg1 ;
-(void)setFUrl:(NSURL *)arg1 ;
-(void)setOnResponse:(id)arg1 ;
-(void)setOnHeaders:(id)arg1 ;
-(void)setFReceivedData:(NSMutableData *)arg1 ;
-(void)setFFinished:(BOOL)arg1 ;
-(void)setFExecuting:(BOOL)arg1 ;
-(void)setFHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setFActiveRequest:(NSMutableURLRequest *)arg1 ;
-(NSMutableURLRequest *)fActiveRequest;
-(void)handleCompleted;
-(void)setFBody:(NSMultiPartInputStream *)arg1 ;
-(NSString *)fOriginalThreadName;
-(NSURL *)fUrl;
-(NSMultiPartInputStream *)fBody;
-(void)handleCancelled:(id)arg1 ;
-(void)startExecuting;
-(void)setFOriginalThreadName:(NSString *)arg1 ;
-(void)stopExecuting;
-(BOOL)fFinished;
-(BOOL)fExecuting;
-(void)setMultiPart;
-(id)onHeaders;
-(NSHTTPURLResponse *)fHttpResponse;
-(id)onProgress;
-(NSMutableData *)fReceivedData;
-(id)onUploadProgress;
-(id)onResponse;
-(void)setMainDocumentUrl:(id)arg1 ;
-(void)setHttpBody:(id)arg1 ;
-(void)setHttpBodyStream:(pair<NSInputStream *, unsigned long>)arg1 ;
-(void)addFormPart:(id)arg1 withFilename:(id)arg2 andPath:(const path*)arg3 ;
-(void)addFormPart:(id)arg1 withFilename:(id)arg2 andDataStreams:(const vector<std::__1::pair<NSInputStream *, unsigned long>, std::__1::allocator<std::__1::pair<NSInputStream *, unsigned long> > >Ref)arg3 ;
-(void)setOnProgress:(id)arg1 ;
-(void)setOnUploadProgress:(id)arg1 ;
-(NSURLConnection *)fUrlConnection;
-(void)setFUrlConnection:(NSURLConnection *)arg1 ;
-(BOOL)isConcurrent;
-(void)setContentType:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setContentLength:(unsigned long long)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setHttpHeaders:(id)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(void)setHttpMethod:(int)arg1 ;
@end

