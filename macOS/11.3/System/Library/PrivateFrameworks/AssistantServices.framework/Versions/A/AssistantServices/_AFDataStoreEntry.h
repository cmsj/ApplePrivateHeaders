/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _AFDataStoreEntry : NSObject {

	long long _type;
	id _value;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                    //@synthesize value=_value - In the implementation block
-(long long)type;
-(id)value;
-(id)propertyListRepresentation;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)_propertyListStringForType;
-(long long)_typeForPropertyListString:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)_valuePropertyListRepresentation;
-(id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2 ;
@end

