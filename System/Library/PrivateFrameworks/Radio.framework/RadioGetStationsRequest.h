/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioGetStationsRequest : RadioRequest {

	long long _nodeType;
	SSURLConnectionRequest* _request;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;
	long long _numberOfResults;
	long long _parentNodeID;
	long long _resultsOffset;

}

@property (nonatomic,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SSMetricsPageEvent * metricsPageEvent;                 //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (assign,nonatomic) long long numberOfResults;                                    //@synthesize numberOfResults=_numberOfResults - In the implementation block
@property (nonatomic,readonly) long long parentNodeID;                                     //@synthesize parentNodeID=_parentNodeID - In the implementation block
@property (assign,nonatomic) long long resultsOffset;                                      //@synthesize resultsOffset=_resultsOffset - In the implementation block
-(void)cancel;
-(long long)numberOfResults;
-(void)setNumberOfResults:(long long)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(SSMetricsConfiguration *)metricsConfiguration;
-(id)_rootTreeNodeByApplyingResponse:(id)arg1 returningError:(id*)arg2 ;
-(id)initForFeaturedStations;
-(id)initWithParentNodeID:(long long)arg1 ;
-(long long)parentNodeID;
-(long long)resultsOffset;
-(void)setResultsOffset:(long long)arg1 ;
@end

