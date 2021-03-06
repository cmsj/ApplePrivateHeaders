/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ML3DatabaseColumn : NSObject {

	NSString* _name;
	unsigned long long _datatype;
	unsigned long long _columnConstraints;
	id _defaultValue;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long datatype;                       //@synthesize datatype=_datatype - In the implementation block
@property (nonatomic,readonly) unsigned long long columnConstraints;              //@synthesize columnConstraints=_columnConstraints - In the implementation block
@property (nonatomic,readonly) id defaultValue;                                   //@synthesize defaultValue=_defaultValue - In the implementation block
+(id)columnWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(id)description;
-(NSString *)name;
-(id)defaultValue;
-(id)initWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(id)_columnDefinitionSQL;
-(unsigned long long)datatype;
-(unsigned long long)columnConstraints;
@end

