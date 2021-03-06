/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNPostalAddress;

@interface ABAddressFieldValuePopulator : NSObject {

	CNPostalAddress* _postalAddress;

}

@property (readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
-(id)initWithPostalAddress:(id)arg1 ;
-(CNPostalAddress *)postalAddress;
-(id)cardViewTagToValueKeypathMap;
-(id)valueForComponentKeypath:(id)arg1 ;
-(void)populateAddressFields:(id)arg1 ;
@end

