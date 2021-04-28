/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSURL, NSString;

@interface NUFileSourceDefinition : NUSingleSourceDefinition {

	NSURL* _url;
	NSString* _uti;

}

@property (readonly) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (readonly) NSString * uti;              //@synthesize uti=_uti - In the implementation block
-(id)description;
-(id)init;
-(NSURL *)url;
-(long long)mediaType;
-(NSString *)uti;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 ;
@end
