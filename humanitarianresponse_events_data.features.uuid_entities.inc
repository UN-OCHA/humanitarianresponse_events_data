<?php
/**
 * @file
 * humanitarianresponse_events_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_events_data_uuid_default_entities() {
  $entities = array();

  $entities['event_categories'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/deba94b1-3148-8ec4-296a-bc764c626474',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Meetings',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Meetings',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Meetings',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Réunions',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'event-categories/meetings',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => 'deba94b1-3148-8ec4-296a-bc764c626474',
    'vocabulary_machine_name' => 'event_categories',
    'weight' => '0',
  );
  $entities['event_categories'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/e44937d9-0b8b-4a94-5581-4e4761bcc860',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Trainings',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Trainings',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Trainings',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Formations',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'event-categories/trainings',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => 'e44937d9-0b8b-4a94-5581-4e4761bcc860',
    'vocabulary_machine_name' => 'event_categories',
    'weight' => '0',
  );
  $entities['event_categories'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/be0d4177-3785-fd94-1940-635f43bd2c84',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Workshops',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Workshops',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Workshops',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Ateliers',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'event-categories/workshops',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => 'be0d4177-3785-fd94-1940-635f43bd2c84',
    'vocabulary_machine_name' => 'event_categories',
    'weight' => '0',
  );
  $entities['event_categories'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ca6e5ded-a38e-4564-9997-a240aac2da39',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Conferences',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conferences',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conferences',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conférences',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'event-categories/conferences',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => 'ca6e5ded-a38e-4564-9997-a240aac2da39',
    'vocabulary_machine_name' => 'event_categories',
    'weight' => '0',
  );

  return $entities;
}
