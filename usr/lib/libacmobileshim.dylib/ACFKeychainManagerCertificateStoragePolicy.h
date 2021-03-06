/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFCertificateStoragePolicy.h>

@class NSString;

@interface ACFKeychainManagerCertificateStoragePolicy : NSObject <ACFCertificateStoragePolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keychainManager;
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2 ;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2 ;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2 ;
@end

