/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, PFUbiquityLocation, NSString;

@interface PFUbiquityMigrationManager : NSObject {

	NSManagedObjectModel* _destinationModel;
	NSManagedObjectModel* _sourceModel;
	PFUbiquityLocation* _rootLocation;
	NSString* _localPeerID;

}

@property (readonly) NSManagedObjectModel * sourceModel;                   //@synthesize sourceModel=_sourceModel - In the implementation block
@property (readonly) NSManagedObjectModel * destinationModel;              //@synthesize destinationModel=_destinationModel - In the implementation block
@property (readonly) PFUbiquityLocation * rootLocation;                    //@synthesize rootLocation=_rootLocation - In the implementation block
-(NSManagedObjectModel *)sourceModel;
-(NSManagedObjectModel *)destinationModel;
-(PFUbiquityLocation *)rootLocation;
-(id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4 ;
-(id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5 ;
-(BOOL)migrateTransactionLogs:(BOOL)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

