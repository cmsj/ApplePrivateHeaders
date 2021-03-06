/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSVSQLRowResult <NSObject>
@required
-(id)objectValueAtColumnIndex:(long long)arg1;
-(char)isNullValueAtColumnIndex:(long long)arg1;
-(long long)int64ValueAtColumnIndex:(long long)arg1;
-(double)doubleValueAtColumnIndex:(long long)arg1;
-(id)stringValueAtColumnIndex:(long long)arg1;
-(id)dataValueAtColumnIndex:(long long)arg1;
-(char)boolValueAtColumnIndex:(long long)arg1;
-(unsigned long long)uint64ValueAtColumnIndex:(long long)arg1;
-(float)floatValueAtColumnIndex:(long long)arg1;
-(id)dateValueAtColumnIndex:(long long)arg1;
-(id)jsonValueAtColumnIndex:(long long)arg1 error:(id*)arg2;

@end

