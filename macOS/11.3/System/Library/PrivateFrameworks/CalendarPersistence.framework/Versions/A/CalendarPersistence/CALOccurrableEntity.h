/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/CALAbstractEntity.h>

@class NSManagedObjectID;

@interface CALOccurrableEntity : CALAbstractEntity {

	NSManagedObjectID* _managedObjectID;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)managedObjectID;
-(void)setManagedObjectID:(id)arg1 ;
-(id)expandOnTimeRange:(id)arg1 ;
-(id)getOccurrenceForStartDate:(id)arg1 ;
@end
