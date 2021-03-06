/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCoreSQLiteColumn.h>

@protocol SiriCoreSQLiteValue;
@class NSString;

@interface _SiriCoreSQLiteColumnInfo : NSObject <SiriCoreSQLiteColumn> {

	char _isPrimaryKey;
	char _isNotNull;
	long long _identifier;
	NSString* _name;
	NSString* _type;
	id<SiriCoreSQLiteValue> _defaultValue;

}

@property (nonatomic,readonly) long long identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char isPrimaryKey;                                      //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (nonatomic,readonly) char isNotNull;                                         //@synthesize isNotNull=_isNotNull - In the implementation block
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)type;
-(long long)identifier;
-(id<SiriCoreSQLiteValue>)defaultValue;
-(char)isNotNull;
-(char)isPrimaryKey;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(id)arg3 isPrimaryKey:(char)arg4 isNotNull:(char)arg5 defaultValue:(id)arg6 ;
@end

