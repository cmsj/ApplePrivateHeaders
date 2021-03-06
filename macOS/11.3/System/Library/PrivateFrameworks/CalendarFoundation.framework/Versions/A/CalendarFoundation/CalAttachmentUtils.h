/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalAttachmentUtils : NSObject
+(id)attachmentContainerWithBaseURL:(id)arg1 ;
+(id)_stripSubdomain:(id)arg1 ;
+(id)_knownTLDForHostname:(id)arg1 ;
+(id)localURLForAttachmentWithRelativePath:(id)arg1 baseURL:(id)arg2 ;
+(id)attachmentContainerForSourceIdentifier:(id)arg1 calendarDataContainer:(id)arg2 ;
+(id)legacyAttachmentContainerWithBaseURL:(id)arg1 ;
+(id)legacyCalendarDataContainer;
+(id)getFileSizeForPath:(id)arg1 fileManager:(id)arg2 error:(id*)arg3 ;
+(id)localRelativePathForLocalAbsoluteURL:(id)arg1 localBaseURL:(id)arg2 ;
+(char)attachmentURL:(id)arg1 matchesServerURL:(id)arg2 ;
@end

