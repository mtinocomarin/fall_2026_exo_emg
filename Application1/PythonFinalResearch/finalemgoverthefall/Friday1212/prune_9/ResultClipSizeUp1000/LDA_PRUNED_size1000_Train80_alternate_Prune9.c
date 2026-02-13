// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.07%
// test_accuracy: 74.34%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:50:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.670517, 0.670501,
    -0.221300, 0.221330,
    0.511633, -0.511656,
    0.502699, -0.502691,
    0.920360, -0.920229,
    -0.984141, 0.983951,
    -0.040145, 0.040205,
    -0.058733, 0.058729,
    0.544434, -0.544425,
    0.124615, -0.124658,
    -0.372572, 0.372595,
    0.049439, -0.049437,
};

float Cg_init[2] = {
    -0.426872, -0.426863
};

float xstd_init[12] = {
    0.003250, 0.001307, 0.101520, 0.164992, 0.001222, 0.000368, 0.022164, 0.069701, 0.000514, 0.000072, 0.014160, 0.059551
};

float xmean_init[12] = {
    0.009471, -0.006325, 0.174585, 0.584943, 0.003023, -0.007772, 0.005095, 0.047186, 0.003081, -0.007816, 0.003356, 0.061694
};

