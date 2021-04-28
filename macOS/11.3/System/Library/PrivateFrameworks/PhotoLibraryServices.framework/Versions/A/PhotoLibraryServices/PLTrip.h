/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLTrip : NSObject {

	unsigned long long _type;
	NSArray* _items;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(id)description;
-(unsigned long long)type;
-(id)typeDescription;
-(double)duration;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 type:(unsigned long long)arg2 ;
@end
