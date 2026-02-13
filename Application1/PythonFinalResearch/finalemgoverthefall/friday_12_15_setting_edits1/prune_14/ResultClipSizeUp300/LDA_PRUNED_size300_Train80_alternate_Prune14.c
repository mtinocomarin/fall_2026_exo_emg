// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.22%
// test_accuracy: 78.75%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 13:17:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.406985, 1.406981,
    0.392229, -0.392226,
    1.005881, -1.005880,
    0.627850, -0.627849,
    -0.153339, 0.153398,
    -0.050638, 0.050582,
    -0.244400, 0.244394,
    0.352896, -0.352893,
    -0.548842, 0.548798,
    0.040746, -0.040690,
    -0.316391, 0.316373,
    0.396251, -0.396247,
};

float Cg_init[2] = {
    -0.591013, -0.591011
};

float xstd_init[12] = {
    0.004514, 0.001885, 0.324853, 0.118559, 0.001303, 0.000213, 0.061982, 0.138781, 0.000736, 0.000174, 0.054710, 0.148312
};

float xmean_init[12] = {
    0.010759, -0.005714, 0.437778, 1.031333, 0.003522, -0.007744, 0.017407, 0.621556, 0.003606, -0.007726, 0.018889, 0.701111
};

