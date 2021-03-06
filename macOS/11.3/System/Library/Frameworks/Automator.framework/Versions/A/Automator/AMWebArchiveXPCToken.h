/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/AMXPCToken.h>

@class NSData;

@interface AMWebArchiveXPCToken : AMXPCToken {

	NSData* __webArchiveData;

}

@property (retain) NSData * _webArchiveData;              //@synthesize _webArchiveData=__webArchiveData - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)_webArchiveData;
-(id)initWithWebArchive:(id)arg1 ;
-(id)_am_convertFromXPCWithWorkflow:(id)arg1 ;
-(void)set_webArchiveData:(NSData *)arg1 ;
@end

