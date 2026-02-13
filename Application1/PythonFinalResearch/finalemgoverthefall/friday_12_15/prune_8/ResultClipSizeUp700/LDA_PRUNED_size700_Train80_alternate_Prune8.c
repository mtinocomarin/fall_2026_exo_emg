// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.77%
// test_accuracy: 67.79%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-12 12:43:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.688654, 0.688703,
    0.279324, -0.279372,
    0.392657, -0.392708,
    0.677654, -0.677635,
    -0.561853, 0.561760,
    0.271014, -0.270895,
    -0.088505, 0.088518,
    -0.028043, 0.028006,
    0.274764, -0.274586,
    -0.037565, 0.037223,
    -0.595106, 0.595192,
    -0.048551, 0.048654,
};

float Cg_init[2] = {
    -0.328967, -0.328968
};

float xstd_init[12] = {
    0.003975, 0.001684, 0.144398, 0.201409, 0.001103, 0.000193, 0.028636, 0.081895, 0.000673, 0.000170, 0.028983, 0.107847
};

float xmean_init[12] = {
    0.010097, -0.005854, 0.235898, 0.678590, 0.003398, -0.007762, 0.009701, 0.076218, 0.003522, -0.007732, 0.013034, 0.119295
};

