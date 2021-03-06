/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/AMXPCToken.h>

@class NSString;

@interface AMEventKitCalendarItemXPCToken : AMXPCToken {

	NSString* _calendarItemIdentifier;
	unsigned long long _entityType;

}

@property (retain) NSString * calendarItemIdentifier;              //@synthesize calendarItemIdentifier=_calendarItemIdentifier - In the implementation block
@property (assign) unsigned long long entityType;                  //@synthesize entityType=_entityType - In the implementation block
+(char)supportsSecureCoding;
+(id)eventStoreForConversionForEntityType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)entityType;
-(void)setEntityType:(unsigned long long)arg1 ;
-(NSString *)calendarItemIdentifier;
-(id)initWithCalendarItem:(id)arg1 ;
-(id)_am_convertFromXPCWithWorkflow:(id)arg1 ;
-(void)setCalendarItemIdentifier:(NSString *)arg1 ;
@end

