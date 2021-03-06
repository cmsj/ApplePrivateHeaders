/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEOConfigDBOperationBase.h>
#import <libobjc.A.dylib/_GEOConfigDBOperation.h>

@class _GEOConfigDB, NSString;

@interface _GEOConfigDBInsertOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {

	_GEOConfigDB* _configDB;
	long long _rowId;
	NSString* _type;
	NSString* _key;
	NSString* _value;
	long long _parentId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)performOperation;
-(id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 key:(id)arg4 value:(id)arg5 parentId:(long long)arg6 ;
@end

