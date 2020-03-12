///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeRequestExpiredShownToSecondaryTeamDetails` struct.
///
/// Team merge request expired.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The email of the primary team admin the request was sent to.
@property (nonatomic, readonly, copy) NSString *sentTo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sentTo The email of the primary team admin the request was sent to.
///
/// @return An initialized instance.
///
- (instancetype)initWithSentTo:(NSString *)sentTo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `TeamMergeRequestExpiredShownToSecondaryTeamDetails` struct.
///
@interface DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails` object.
///
+ (DBTEAMLOGTeamMergeRequestExpiredShownToSecondaryTeamDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
