/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOServerFormattedString;
#import <Maps/Maps-Structs.h>
@class NSArray, NSTimeZone;

@interface TransitInstruction : NSObject {

	BOOL _locallyGeneratedInstructions;
	int _context;
	NSArray* _majorFormattedInstruction;
	NSArray* _minorFormattedInstruction;
	NSArray* _tertiaryFormattedInstruction;
	id<GEOServerFormattedString> _departureBarInstruction;
	id<GEOServerFormattedString> _countStopsFormattedString;

}

@property (nonatomic,readonly) int context;                                             //@synthesize context=_context - In the implementation block
@property (copy) NSArray * majorFormattedInstruction;                                   //@synthesize majorFormattedInstruction=_majorFormattedInstruction - In the implementation block
@property (copy) NSArray * minorFormattedInstruction;                                   //@synthesize minorFormattedInstruction=_minorFormattedInstruction - In the implementation block
@property (copy) NSArray * tertiaryFormattedInstruction;                                //@synthesize tertiaryFormattedInstruction=_tertiaryFormattedInstruction - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZoneForFormattedString; 
@property (assign,nonatomic) BOOL locallyGeneratedInstructions;                         //@synthesize locallyGeneratedInstructions=_locallyGeneratedInstructions - In the implementation block
@property (retain) id<GEOServerFormattedString> departureBarInstruction;                //@synthesize departureBarInstruction=_departureBarInstruction - In the implementation block
@property (retain) id<GEOServerFormattedString> countStopsFormattedString;              //@synthesize countStopsFormattedString=_countStopsFormattedString - In the implementation block
+(id)instructionForUncertainArrivalToStationStep:(id)arg1 context:(int)arg2 ;
-(void)setLocallyGeneratedInstructions:(BOOL)arg1 ;
-(void)refreshInstructionStrings;
-(id)formattedInstructionForType:(long long)arg1 ;
-(id<GEOServerFormattedString>)departureBarInstruction;
-(BOOL)locallyGeneratedInstructions;
-(NSArray *)majorFormattedInstruction;
-(void)setDepartureBarInstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setMajorFormattedInstruction:(NSArray *)arg1 ;
-(NSTimeZone *)timeZoneForFormattedString;
-(void)setMinorFormattedInstruction:(NSArray *)arg1 ;
-(void)_fillInInstructions;
-(NSDictionary*)overridenInstructionsMapping;
-(NSArray *)tertiaryFormattedInstruction;
-(void)setTertiaryFormattedInstruction:(NSArray *)arg1 ;
-(id)instructionSetsForInstructionType:(long long)arg1 ;
-(NSArray *)minorFormattedInstruction;
-(void)setCountStopsFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(int)context;
-(id)initWithContext:(int)arg1 ;
-(id)instructionSet;
-(id<GEOServerFormattedString>)countStopsFormattedString;
@end

