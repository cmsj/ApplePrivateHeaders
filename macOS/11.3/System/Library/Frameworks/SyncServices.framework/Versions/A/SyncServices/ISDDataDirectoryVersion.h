/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ISDDataDirectoryVersion : NSObject {

	int _version;

}
-(id)initFromPath:(id)arg1 ;
-(char)isTiger;
-(char)isLeopard;
-(id)arrayAsGlobalIds:(id)arg1 ;
-(char)usesISDGlobalId;
-(id)asGlobalId:(id)arg1 ;
-(id)initWithDataVersion:(int)arg1 ;
-(char)isSnowLeopard;
-(int)dataDirectoryType;
@end

