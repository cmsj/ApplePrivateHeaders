/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISSupport-Structs.h>
#import <ISSupport/ISS_DMDAVPropertiesRequest.h>

@interface ISS_DMDAVPropFind : ISS_DMDAVPropertiesRequest {

	char _includeParent;
	char _returnDictionary;

}
+(id)propFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 includingParent:(char)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalizeOperation;
-(void)setResultsReturnedInDictionary:(char)arg1 ;
-(id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 includingParent:(char)arg5 ;
@end

