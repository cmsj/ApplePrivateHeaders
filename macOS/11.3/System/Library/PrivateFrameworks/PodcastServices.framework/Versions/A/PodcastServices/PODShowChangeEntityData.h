/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastServices.framework/Versions/A/PodcastServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastServices/PODContentChangeEntityData.h>
#import <libobjc.A.dylib/PODSecureCoding.h>

@class PODShow, PODShowArtworkChangeEntityData, NSString;

@interface PODShowChangeEntityData : PODContentChangeEntityData <PODSecureCoding> {

	PODShow* _show;
	PODShowArtworkChangeEntityData* _showArtworkData;

}

@property (nonatomic,readonly) PODShow * show;                                                //@synthesize show=_show - In the implementation block
@property (nonatomic,readonly) PODShowArtworkChangeEntityData * showArtworkData;              //@synthesize showArtworkData=_showArtworkData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PODShow *)show;
-(PODShowArtworkChangeEntityData *)showArtworkData;
-(id)initWithShow:(id)arg1 showArtworkData:(id)arg2 ;
@end

