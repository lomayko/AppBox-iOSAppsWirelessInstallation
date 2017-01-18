///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGListFileMembersError.h"
#import "DBSHARINGSharingFileAccessError.h"
#import "DBSHARINGSharingUserError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGListFileMembersError

@synthesize userError = _userError;
@synthesize accessError = _accessError;

#pragma mark - Constructors

- (instancetype)initWithUserError:(DBSHARINGSharingUserError *)userError {
  self = [super init];
  if (self) {
    _tag = DBSHARINGListFileMembersErrorUserError;
    _userError = userError;
  }
  return self;
}

- (instancetype)initWithAccessError:(DBSHARINGSharingFileAccessError *)accessError {
  self = [super init];
  if (self) {
    _tag = DBSHARINGListFileMembersErrorAccessError;
    _accessError = accessError;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBSHARINGListFileMembersErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

- (DBSHARINGSharingUserError *)userError {
  if (![self isUserError]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBSHARINGListFileMembersErrorUserError, but was %@.", [self tagName]];
  }
  return _userError;
}

- (DBSHARINGSharingFileAccessError *)accessError {
  if (![self isAccessError]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBSHARINGListFileMembersErrorAccessError, but was %@.", [self tagName]];
  }
  return _accessError;
}

#pragma mark - Tag state methods

- (BOOL)isUserError {
  return _tag == DBSHARINGListFileMembersErrorUserError;
}

- (BOOL)isAccessError {
  return _tag == DBSHARINGListFileMembersErrorAccessError;
}

- (BOOL)isOther {
  return _tag == DBSHARINGListFileMembersErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBSHARINGListFileMembersErrorUserError:
    return @"DBSHARINGListFileMembersErrorUserError";
  case DBSHARINGListFileMembersErrorAccessError:
    return @"DBSHARINGListFileMembersErrorAccessError";
  case DBSHARINGListFileMembersErrorOther:
    return @"DBSHARINGListFileMembersErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGListFileMembersErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGListFileMembersErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGListFileMembersErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGListFileMembersErrorSerializer

+ (NSDictionary *)serialize:(DBSHARINGListFileMembersError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isUserError]) {
    jsonDict[@"user_error"] = [[DBSHARINGSharingUserErrorSerializer serialize:valueObj.userError] mutableCopy];
    jsonDict[@".tag"] = @"user_error";
  } else if ([valueObj isAccessError]) {
    jsonDict[@"access_error"] =
        [[DBSHARINGSharingFileAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
    jsonDict[@".tag"] = @"access_error";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag"
                                   reason:@"Object not properly initialized. Tag has an unknown value."
                                 userInfo:nil]);
  }

  return jsonDict;
}

+ (DBSHARINGListFileMembersError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"user_error"]) {
    DBSHARINGSharingUserError *userError = [DBSHARINGSharingUserErrorSerializer deserialize:valueDict[@"user_error"]];
    return [[DBSHARINGListFileMembersError alloc] initWithUserError:userError];
  } else if ([tag isEqualToString:@"access_error"]) {
    DBSHARINGSharingFileAccessError *accessError =
        [DBSHARINGSharingFileAccessErrorSerializer deserialize:valueDict[@"access_error"]];
    return [[DBSHARINGListFileMembersError alloc] initWithAccessError:accessError];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBSHARINGListFileMembersError alloc] initWithOther];
  }

  @throw([NSException
      exceptionWithName:@"InvalidTag"
                 reason:[NSString stringWithFormat:@"Tag has an invalid value: \"%@\".", valueDict[@".tag"]]
               userInfo:nil]);
}

@end