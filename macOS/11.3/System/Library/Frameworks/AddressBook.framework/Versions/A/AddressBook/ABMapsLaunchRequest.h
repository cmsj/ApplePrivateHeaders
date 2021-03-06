/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNPostalAddress, NSURL;

@interface ABMapsLaunchRequest : NSObject {

	char _presentDirections;
	CNPostalAddress* _postalAddress;
	NSURL* _fallbackURL;

}

@property (nonatomic,readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,readonly) char presentDirections;                       //@synthesize presentDirections=_presentDirections - In the implementation block
@property (nonatomic,readonly) NSURL * fallbackURL;                          //@synthesize fallbackURL=_fallbackURL - In the implementation block
-(CNPostalAddress *)postalAddress;
-(id)initWithPostalAddress:(id)arg1 presentDirections:(char)arg2 fallbackURL:(id)arg3 ;
-(char)presentDirections;
-(NSURL *)fallbackURL;
@end

