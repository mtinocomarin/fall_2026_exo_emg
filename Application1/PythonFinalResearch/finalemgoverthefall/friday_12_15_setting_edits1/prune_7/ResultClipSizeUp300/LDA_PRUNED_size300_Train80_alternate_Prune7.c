// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.80%
// test_accuracy: 78.75%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:14:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.946988, 0.946993,
    0.059839, -0.059834,
    0.801334, -0.801332,
    0.586732, -0.586725,
    -0.507342, 0.507378,
    0.086651, -0.086701,
    0.005691, -0.005682,
    0.310196, -0.310184,
    -0.369526, 0.369397,
    0.153311, -0.153124,
    -0.421165, 0.421098,
    0.352304, -0.352305,
};

float Cg_init[2] = {
    -0.471670, -0.471659
};

float xstd_init[12] = {
    0.004679, 0.002116, 0.330528, 0.118228, 0.001492, 0.000271, 0.069176, 0.138203, 0.000682, 0.000156, 0.048833, 0.150103
};

float xmean_init[12] = {
    0.011018, -0.005522, 0.457867, 1.035840, 0.003600, -0.007722, 0.019733, 0.619520, 0.003559, -0.007733, 0.016000, 0.696319
};

