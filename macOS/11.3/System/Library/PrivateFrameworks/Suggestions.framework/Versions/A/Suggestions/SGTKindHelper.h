/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface SGTKindHelper : NSObject {

	NSDictionary* typeNames;
	NSDictionary* contentTypeToTypeName;
	NSDictionary* typeToContentTypes;

}
+(id)sharedKindHelper;
-(id)init;
-(id)normalizedValueForContentType:(id)arg1 kindProposition:(id)arg2 values:(id*)arg3 excludeDynamic:(char)arg4 ;
@end

