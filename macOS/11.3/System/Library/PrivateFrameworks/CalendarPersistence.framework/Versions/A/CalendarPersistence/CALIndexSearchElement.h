/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/CALSearchElement.h>

@class NSString;

@interface CALIndexSearchElement : CALSearchElement {

	NSString* _value;
	int _type;
	NSString* _prop;

}
+(id)searchElementForIndex:(id)arg1 withEntityType:(int)arg2 matchedProperty:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)property;
-(int)entityType;
-(char)matchesEntity:(id)arg1 ;
-(char)isEqualToSearchElement:(id)arg1 ;
-(id)initForIndexString:(id)arg1 withEntityType:(int)arg2 matchedProperty:(id)arg3 ;
-(id)indexString;
@end
