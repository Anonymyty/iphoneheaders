/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/AddressBook.siriUIBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABAssistantDisambiguationProvider : NSObject {

	void* _addressBook;
	NSString* _identifier;
	int _property;
	void* _multiValue;

}
-(id)disambiguationForPerson:(id)arg1 ;
-(id)disambiguationForRelatedName:(id)arg1 ;
-(id)disambiguationItemForListItem:(id)arg1 ;
-(id)disambiguationForEmail:(id)arg1 ;
-(id)disambiguationForPhone:(id)arg1 ;
-(id)disambiguationForPostalAddress:(id)arg1 ;
-(id)disambiguationForPhone:(id)arg1 identifierURL:(id)arg2 ;
-(id)disambiguationForEmail:(id)arg1 identifierURL:(id)arg2 ;
-(id)valueForLabel:(id)arg1 property:(int)arg2 identifier:(id)arg3 ;
-(void)dealloc;
-(id)initWithAddressBook:(void*)arg1 ;
@end
