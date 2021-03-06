/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABTask.h>

@class ABPerson, NSString;

@interface ABAddSuggestedValueTask : ABTask {

	ABPerson* _person;
	NSString* _property;
	id _value;

}

@property (retain) ABPerson * person;                //@synthesize person=_person - In the implementation block
@property (retain) NSString * property;              //@synthesize property=_property - In the implementation block
@property (retain) id value;                         //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(ABPerson *)person;
-(void)setPerson:(ABPerson *)arg1 ;
-(NSString *)property;
-(id)run:(id*)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 person:(id)arg2 property:(id)arg3 value:(id)arg4 ;
-(id)multiValueByAddingSuggestedValue;
-(id)getOrMakeMultivalue;
-(id)firstAvailableLabelGivenCurrentLabels:(id)arg1 ;
@end

